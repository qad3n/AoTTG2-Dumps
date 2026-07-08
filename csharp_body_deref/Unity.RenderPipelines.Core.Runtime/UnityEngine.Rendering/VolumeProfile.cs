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
	[Address(RVA = "0x48E78E0", Offset = "0x48E78E0", VA = "0x48E78E0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x48E7A10", Offset = "0x48E7A10", VA = "0x48E7A10")]
	internal void OnDisable()
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x48E7AF0", Offset = "0x48E7AF0", VA = "0x48E7AF0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000E21")]
	public T Add<T>(bool overrides = false) where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x48E7B00", Offset = "0x48E7B00", VA = "0x48E7B00")]
	public VolumeComponent Add(Type type, bool overrides = false)
	{
		return null;
	}

	[Token(Token = "0x6000E23")]
	public void Remove<T>() where T : VolumeComponent
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x48E7E30", Offset = "0x48E7E30", VA = "0x48E7E30")]
	public void Remove(Type type)
	{
	}

	[Token(Token = "0x6000E25")]
	public bool Has<T>() where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x48E7C60", Offset = "0x48E7C60", VA = "0x48E7C60")]
	public bool Has(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x48E7F30", Offset = "0x48E7F30", VA = "0x48E7F30")]
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
	[Address(RVA = "0x48E80F0", Offset = "0x48E80F0", VA = "0x48E80F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x48E81A0", Offset = "0x48E81A0", VA = "0x48E81A0")]
	internal int GetComponentListHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x48E8260", Offset = "0x48E8260", VA = "0x48E8260")]
	internal void Sanitize()
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x48E8350", Offset = "0x48E8350", VA = "0x48E8350")]
	public VolumeProfile()
	{
	}
}
