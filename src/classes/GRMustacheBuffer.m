// The MIT License
//
// Copyright (c) 2013 Gwendal Roué
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import "GRMustacheBuffer_private.h"

@implementation GRMustacheBuffer

+ (instancetype)buffer
{
    return [[[GRMustacheBuffer alloc] init] autorelease];
}

- (void)dealloc
{
    [_string release];
    [super dealloc];
}

- (id)init
{
    self = [super init];
    if (self) {
        _string = [[NSMutableString alloc] init];
    }
    return self;
}

- (NSString *)string
{
    return [[_string retain] autorelease];
}

- (void)appendString:(NSString *)string blank:(BOOL)blank prefix:(BOOL)prefix suffix:(BOOL)suffix
{
    if (string == nil) return;
    [_string appendString:string];
}

- (void)appendRendering:(NSString *)string
{
    if (string == nil) return;
    [_string appendString:string];
}

@end