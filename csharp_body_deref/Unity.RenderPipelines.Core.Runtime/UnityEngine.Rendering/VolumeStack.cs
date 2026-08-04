// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200020C")]
public sealed class VolumeStack : IDisposable
{
	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Dictionary<Type, VolumeComponent> components;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x18")]
	internal (VolumeParameter parameter, VolumeParameter defaultValue)[] defaultParameters;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x20")]
	internal bool requiresReset;

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x4C08E00", Offset = "0x4C08E00", VA = "0x4C08E00")]
	internal VolumeStack()
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x4C0D510", Offset = "0x4C0D510", VA = "0x4C0D510")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x4C08E80", Offset = "0x4C08E80", VA = "0x4C08E80")]
	internal void Reload(List<VolumeComponent> componentDefaultStates)
	{
	}

	[Token(Token = "0x6000E36")]
	public T GetComponent<T>() where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x4C09630", Offset = "0x4C09630", VA = "0x4C09630")]
	public VolumeComponent GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x4C094A0", Offset = "0x4C094A0", VA = "0x4C094A0", Slot = "4")]
	public void Dispose()
	{
	}
}
