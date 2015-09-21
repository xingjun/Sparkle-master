//
//  SUPlainInstallerInternals.m
//  Sparkle
//
//  Created by Andy Matuschak on 3/9/06.
//  Copyright 2006 Andy Matuschak. All rights reserved.
//

#ifndef SUPLAININSTALLERINTERNALS_H
#define SUPLAININSTALLERINTERNALS_H

#import <Foundation/Foundation.h>

#import "SUPlainInstaller.h"

@interface SUPlainInstaller (Internals)
+ (BOOL)copyPathWithAuthentication:(NSString *)src overPath:(NSString *)dst appendVersion:(BOOL)a error:(NSError **)error;
+ (void)_movePathToTrash:(NSString *)path appendVersion:(BOOL)a;
+ (BOOL)_removeFileAtPath:(NSString *)path error:(NSError **)error;
+ (BOOL)_removeFileAtPathWithForcedAuthentication:(NSString *)src error:(NSError **)error;
@end

#endif
