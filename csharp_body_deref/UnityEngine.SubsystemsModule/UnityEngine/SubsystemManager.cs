// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemManager
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.SubsystemsImplementation;

namespace UnityEngine;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/SubsystemManager.h")]
public static class SubsystemManager
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action beforeReloadSubsystems;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action afterReloadSubsystems;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x10")]
	private static List<IntegratedSubsystem> s_IntegratedSubsystems;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x18")]
	private static List<SubsystemWithProvider> s_StandaloneSubsystems;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x20")]
	private static List<Subsystem> s_DeprecatedSubsystems;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action reloadSubsytemsStarted;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action reloadSubsytemsCompleted;

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x2FF8450", Offset = "0x2FF6A50", VA = "0x182FF8450")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ReloadSubsystemsStarted()
	{
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x2FF8360", Offset = "0x2FF6960", VA = "0x182FF8360")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ReloadSubsystemsCompleted()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x2FF8240", Offset = "0x2FF6840", VA = "0x182FF8240")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeIntegratedSubsystem(IntPtr ptr, IntegratedSubsystem subsystem)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x2FF7EA0", Offset = "0x2FF64A0", VA = "0x182FF7EA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ClearSubsystems()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000018")]
	[Address(RVA = "0x2FF85C0", Offset = "0x2FF6BC0", VA = "0x182FF85C0")]
	private static extern void StaticConstructScriptingClassMap();

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x2FF85F0", Offset = "0x2FF6BF0", VA = "0x182FF85F0")]
	static SubsystemManager()
	{
	}

	[Token(Token = "0x600001A")]
	public static void GetSubsystemDescriptors<T>(List<T> descriptors) where T : ISubsystemDescriptor
	{
	}

	[Token(Token = "0x600001B")]
	public static void GetSubsystems<T>(List<T> subsystems) where T : ISubsystem
	{
	}

	[Token(Token = "0x600001C")]
	private static void AddSubsystemSubset<TBaseTypeInList, TQueryType>(List<TBaseTypeInList> copyFrom, List<TQueryType> copyTo) where TBaseTypeInList : ISubsystem where TQueryType : ISubsystem
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2FF80D0", Offset = "0x2FF66D0", VA = "0x182FF80D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.XRModule" })]
	internal static IntegratedSubsystem GetIntegratedSubsystemByPtr(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x2FF8540", Offset = "0x2FF6B40", VA = "0x182FF8540")]
	internal static bool RemoveStandaloneSubsystem(SubsystemWithProvider subsystem)
	{
		return default(bool);
	}
}
