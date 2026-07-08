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
	[Address(RVA = "0x48E3D90", Offset = "0x48E3D90", VA = "0x48E3D90")]
	internal VolumeStack()
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x48E84A0", Offset = "0x48E84A0", VA = "0x48E84A0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x48E3E10", Offset = "0x48E3E10", VA = "0x48E3E10")]
	internal void Reload(List<VolumeComponent> componentDefaultStates)
	{
	}

	[Token(Token = "0x6000E36")]
	public T GetComponent<T>() where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x48E45C0", Offset = "0x48E45C0", VA = "0x48E45C0")]
	public VolumeComponent GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x48E4430", Offset = "0x48E4430", VA = "0x48E4430", Slot = "4")]
	public void Dispose()
	{
	}
}
