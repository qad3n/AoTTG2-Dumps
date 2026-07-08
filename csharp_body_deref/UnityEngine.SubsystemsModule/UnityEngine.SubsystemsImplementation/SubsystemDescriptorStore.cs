using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.SubsystemsImplementation;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/SubsystemManager.h")]
public static class SubsystemDescriptorStore
{
	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x0")]
	private static List<IntegratedSubsystemDescriptor> s_IntegratedDescriptors;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x8")]
	private static List<SubsystemDescriptorWithProvider> s_StandaloneDescriptors;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x10")]
	private static List<SubsystemDescriptor> s_DeprecatedDescriptors;

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4B77730", Offset = "0x4B77730", VA = "0x4B77730")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InitializeManagedDescriptor(IntPtr ptr, IntegratedSubsystemDescriptor desc)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4B77800", Offset = "0x4B77800", VA = "0x4B77800")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ClearManagedDescriptors()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B779D0", Offset = "0x4B779D0", VA = "0x4B779D0")]
	private static extern void ReportSingleSubsystemAnalytics(string id);

	[Token(Token = "0x600001D")]
	internal static void RegisterDescriptor<TDescriptor, TBaseTypeInList>(TDescriptor descriptor, List<TBaseTypeInList> storeInList) where TDescriptor : TBaseTypeInList where TBaseTypeInList : ISubsystemDescriptor
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B76DF0", Offset = "0x4B76DF0", VA = "0x4B76DF0")]
	internal static void RegisterDeprecatedDescriptor(SubsystemDescriptor descriptor)
	{
	}
}
