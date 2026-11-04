// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore
// Update status: CHANGED in this game update
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

[Token(Token = "0x200000E")]
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

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x2FF7980", Offset = "0x2FF5F80", VA = "0x182FF7980")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void InitializeManagedDescriptor(IntPtr ptr, IntegratedSubsystemDescriptor desc)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x2FF77E0", Offset = "0x2FF5DE0", VA = "0x182FF77E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ClearManagedDescriptors()
	{
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x2FF7BB0", Offset = "0x2FF61B0", VA = "0x182FF7BB0")]
	private static void ReportSingleSubsystemAnalytics(string id)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x2FF7AE0", Offset = "0x2FF60E0", VA = "0x182FF7AE0")]
	public static void RegisterDescriptor(SubsystemDescriptorWithProvider descriptor)
	{
	}

	[Token(Token = "0x6000023")]
	internal static void GetSubsystemDescriptors<T>(List<T> descriptors) where T : ISubsystemDescriptor
	{
	}

	[Token(Token = "0x6000024")]
	private static void AddDescriptorSubset<TBaseTypeInList, TQueryType>(List<TBaseTypeInList> copyFrom, List<TQueryType> copyTo) where TBaseTypeInList : ISubsystemDescriptor where TQueryType : ISubsystemDescriptor
	{
	}

	[Token(Token = "0x6000025")]
	internal static void RegisterDescriptor<TDescriptor, TBaseTypeInList>(TDescriptor descriptor, List<TBaseTypeInList> storeInList) where TDescriptor : TBaseTypeInList where TBaseTypeInList : ISubsystemDescriptor
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x2FF7A70", Offset = "0x2FF6070", VA = "0x182FF7A70")]
	internal static void RegisterDeprecatedDescriptor(SubsystemDescriptor descriptor)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000028")]
	[Address(RVA = "0x2FF7B70", Offset = "0x2FF6170", VA = "0x182FF7B70")]
	private static extern void ReportSingleSubsystemAnalytics_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper id);
}
