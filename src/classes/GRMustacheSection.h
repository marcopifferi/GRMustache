// The MIT License
// 
// Copyright (c) 2012 Gwendal Roué
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

#import <Foundation/Foundation.h>
#import "GRMustacheAvailabilityMacros.h"
#import "GRMustacheRendering.h"

@class GRMustacheTemplateRepository;

/**
 * A GRMustacheSection is a template component that renders sections
 * such as `{{#name}}...{{/name}}`.
 *
 * @see GRMustacheTemplateComponent
 */
@interface GRMustacheSection: NSObject<GRMustacheRendering> {
@private
    id _expression;
    NSString *_templateString;
    NSRange _innerRange;
    BOOL _overridable;
    BOOL _inverted;
    NSArray *_components;
}

/**
 * TODO
 */
@property (nonatomic, readonly, getter = isInverted) BOOL inverted AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER;

/**
 * TODO
 */
@property (nonatomic, readonly, getter = isOverridable) BOOL overridable AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER;

/**
 * The literal inner content of the section, with unprocessed Mustache
 * `{{tags}}`.
 */
@property (nonatomic, readonly) NSString *innerTemplateString AVAILABLE_GRMUSTACHE_VERSION_6_0_AND_LATER;

@end
