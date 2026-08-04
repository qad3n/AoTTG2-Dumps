// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeProfile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200020A")]
public sealed class VolumeProfile : ScriptableObject
{
	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x18")]
	public List<VolumeComponent> components;

	[NonSerialized]
	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x20")]
	public bool isDirty;

	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x4C0C950", Offset = "0x4C0C950", VA = "0x4C0C950")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x4C0CA80", Offset = "0x4C0CA80", VA = "0x4C0CA80")]
	internal void OnDisable()
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x4C0CB60", Offset = "0x4C0CB60", VA = "0x4C0CB60")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000E21")]
	public T Add<T>(bool overrides = false) where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x4C0CB70", Offset = "0x4C0CB70", VA = "0x4C0CB70")]
	public VolumeComponent Add(Type type, bool overrides = false)
	{
		return null;
	}

	[Token(Token = "0x6000E23")]
	public void Remove<T>() where T : VolumeComponent
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x4C0CEA0", Offset = "0x4C0CEA0", VA = "0x4C0CEA0")]
	public void Remove(Type type)
	{
	}

	[Token(Token = "0x6000E25")]
	public bool Has<T>() where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x4C0CCD0", Offset = "0x4C0CCD0", VA = "0x4C0CCD0")]
	public bool Has(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x4C0CFA0", Offset = "0x4C0CFA0", VA = "0x4C0CFA0")]
	public bool HasSubclassOf(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E28")]
	public bool TryGet<T>(out T component) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000E29")]
	public bool TryGet<T>(Type type, out T component) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000E2A")]
	public bool TryGetSubclassOf<T>(Type type, out T component) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000E2B")]
	public bool TryGetAllSubclassOf<T>(Type type, List<T> result) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x4C0D160", Offset = "0x4C0D160", VA = "0x4C0D160", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x4C0D210", Offset = "0x4C0D210", VA = "0x4C0D210")]
	internal int GetComponentListHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x4C0D2D0", Offset = "0x4C0D2D0", VA = "0x4C0D2D0")]
	internal void Sanitize()
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x4C0D3C0", Offset = "0x4C0D3C0", VA = "0x4C0D3C0")]
	public VolumeProfile()
	{
	}
}
