// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeStack
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x277E510", Offset = "0x277CB10", VA = "0x18277E510")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F9B")]
		[Address(RVA = "0x2B71660", Offset = "0x2B6FC60", VA = "0x182B71660")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x2B81F10", Offset = "0x2B80510", VA = "0x182B81F10")]
	internal VolumeStack()
	{
	}

	[Token(Token = "0x6000F95")]
	[Address(RVA = "0x2B81B10", Offset = "0x2B80110", VA = "0x182B81B10")]
	internal void Clear()
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x2B81D50", Offset = "0x2B80350", VA = "0x182B81D50")]
	internal void Reload(Type[] componentTypes)
	{
	}

	[Token(Token = "0x6000F97")]
	public T GetComponent<T>() where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x2B81CE0", Offset = "0x2B802E0", VA = "0x182B81CE0")]
	public VolumeComponent GetComponent(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x2B81CC0", Offset = "0x2B802C0", VA = "0x182B81CC0", Slot = "4")]
	public void Dispose()
	{
	}
}
