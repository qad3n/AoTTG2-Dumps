using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.SubsystemsImplementation;

namespace UnityEngine;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/Subsystems/SubsystemManager.h")]
public static class SubsystemManager
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action beforeReloadSubsystems;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static Action reloadSubsytemsStarted;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action reloadSubsytemsCompleted;

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4B76E60", Offset = "0x4B76E60", VA = "0x4B76E60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ReloadSubsystemsStarted()
	{
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4B76F80", Offset = "0x4B76F80", VA = "0x4B76F80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ReloadSubsystemsCompleted()
	{
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4B770A0", Offset = "0x4B770A0", VA = "0x4B770A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InitializeIntegratedSubsystem(IntPtr ptr, IntegratedSubsystem subsystem)
	{
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4B771A0", Offset = "0x4B771A0", VA = "0x4B771A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void ClearSubsystems()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000014")]
	[Address(RVA = "0x4B77410", Offset = "0x4B77410", VA = "0x4B77410")]
	private static extern void StaticConstructScriptingClassMap();

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x4B77440", Offset = "0x4B77440", VA = "0x4B77440")]
	static SubsystemManager()
	{
	}

	[Token(Token = "0x6000016")]
	public static void GetSubsystems<T>(List<T> subsystems) where T : ISubsystem
	{
	}

	[Token(Token = "0x6000017")]
	private static void AddSubsystemSubset<TBaseTypeInList, TQueryType>(List<TBaseTypeInList> copyFrom, List<TQueryType> copyTo) where TBaseTypeInList : ISubsystem where TQueryType : ISubsystem
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x4B775A0", Offset = "0x4B775A0", VA = "0x4B775A0")]
	internal static IntegratedSubsystem GetIntegratedSubsystemByPtr(IntPtr ptr)
	{
		return null;
	}

	[Token(Token = "0x6000019")]
	public static void GetInstances<T>(List<T> subsystems) where T : ISubsystem
	{
	}
}
