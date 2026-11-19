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

[Token(Token = "0x2000228")]
public sealed class VolumeProfile : ScriptableObject
{
	[Token(Token = "0x2000229")]
	[Flags]
	internal enum DirtyState
	{
		[Token(Token = "0x40009B3")]
		None = 0,
		[Token(Token = "0x40009B4")]
		DirtyByComponentChange = 1,
		[Token(Token = "0x40009B5")]
		DirtyByProfileReset = 2,
		[Token(Token = "0x40009B6")]
		Other = 4
	}

	[Token(Token = "0x40009B0")]
	[FieldOffset(Offset = "0x18")]
	public List<VolumeComponent> components;

	[Token(Token = "0x40009B1")]
	[FieldOffset(Offset = "0x20")]
	internal DirtyState dirtyState;

	[Token(Token = "0x170001FD")]
	[Obsolete("This field was only public for editor access. #from(6000.0)")]
	public bool isDirty
	{
		[Token(Token = "0x6000F7D")]
		[Address(RVA = "0x6556FB0", Offset = "0x6555FB0", VA = "0x6556FB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F7E")]
		[Address(RVA = "0x6556FC0", Offset = "0x6555FC0", VA = "0x6556FC0")]
		set
		{
		}
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x6556FD0", Offset = "0x6555FD0", VA = "0x6556FD0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x6557100", Offset = "0x6556100", VA = "0x6557100")]
	internal void OnDisable()
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x6557250", Offset = "0x6556250", VA = "0x6557250")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000F82")]
	public T Add<T>(bool overrides = false) where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x6557260", Offset = "0x6556260", VA = "0x6557260")]
	public VolumeComponent Add(Type type, bool overrides = false)
	{
		return null;
	}

	[Token(Token = "0x6000F84")]
	public void Remove<T>() where T : VolumeComponent
	{
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x6557570", Offset = "0x6556570", VA = "0x6557570")]
	public void Remove(Type type)
	{
	}

	[Token(Token = "0x6000F86")]
	public bool Has<T>() where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x65573C0", Offset = "0x65563C0", VA = "0x65573C0")]
	public bool Has(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x6557670", Offset = "0x6556670", VA = "0x6557670")]
	public bool HasSubclassOf(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F89")]
	public bool TryGet<T>(out T component) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8A")]
	public bool TryGet<T>(Type type, out T component) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8B")]
	public bool TryGetSubclassOf<T>(Type type, out T component) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8C")]
	public bool TryGetAllSubclassOf<T>(Type type, List<T> result) where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000F8D")]
	[Address(RVA = "0x6557800", Offset = "0x6556800", VA = "0x6557800")]
	internal int GetComponentListHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x65578B0", Offset = "0x65568B0", VA = "0x65578B0")]
	public int GetStateHash()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x6557A00", Offset = "0x6556A00", VA = "0x6557A00")]
	internal void Sanitize()
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x6557AF0", Offset = "0x6556AF0", VA = "0x6557AF0")]
	public VolumeProfile()
	{
	}
}
