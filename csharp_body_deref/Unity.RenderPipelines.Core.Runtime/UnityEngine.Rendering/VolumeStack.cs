// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200022B")]
public sealed class VolumeStack : IDisposable
{
	[Token(Token = "0x40009B9")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Dictionary<Type, VolumeComponent> components;

	[Token(Token = "0x40009BA")]
	[FieldOffset(Offset = "0x18")]
	internal VolumeParameter[] parameters;

	[Token(Token = "0x40009BB")]
	[FieldOffset(Offset = "0x20")]
	internal bool requiresReset;

	[Token(Token = "0x40009BC")]
	[FieldOffset(Offset = "0x21")]
	internal bool requiresResetForAllProperties;

	[Token(Token = "0x170001FE")]
	public bool isValid
	{
		[Token(Token = "0x6000F9A")]
		[Address(RVA = "0x6558130", Offset = "0x6557130", VA = "0x6558130")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F9B")]
		[Address(RVA = "0x6558140", Offset = "0x6557140", VA = "0x6558140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x6557C40", Offset = "0x6556C40", VA = "0x6557C40")]
	internal VolumeStack()
	{
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x6557CC0", Offset = "0x6556CC0", VA = "0x6557CC0")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x6557E80", Offset = "0x6556E80", VA = "0x6557E80")]
	internal void Reload(Type[] componentTypes)
	{
	}

	[Token(Token = "0x6000F97")]
	public T GetComponent<T>() where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x65580C0", Offset = "0x65570C0", VA = "0x65580C0")]
	public VolumeComponent GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x6558120", Offset = "0x6557120", VA = "0x6558120", Slot = "4")]
	public void Dispose()
	{
	}
}
