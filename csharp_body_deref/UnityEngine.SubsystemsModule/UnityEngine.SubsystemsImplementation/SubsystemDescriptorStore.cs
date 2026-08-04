// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4E9F060", Offset = "0x4E9F060", VA = "0x4E9F060")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InitializeManagedDescriptor(IntPtr ptr, IntegratedSubsystemDescriptor desc)
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4E9F130", Offset = "0x4E9F130", VA = "0x4E9F130")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ClearManagedDescriptors()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4E9F300", Offset = "0x4E9F300", VA = "0x4E9F300")]
	private static extern void ReportSingleSubsystemAnalytics(string id);

	[Token(Token = "0x600001D")]
	internal static void RegisterDescriptor<TDescriptor, TBaseTypeInList>(TDescriptor descriptor, List<TBaseTypeInList> storeInList) where TDescriptor : TBaseTypeInList where TBaseTypeInList : ISubsystemDescriptor
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4E9E720", Offset = "0x4E9E720", VA = "0x4E9E720")]
	internal static void RegisterDeprecatedDescriptor(SubsystemDescriptor descriptor)
	{
	}
}
