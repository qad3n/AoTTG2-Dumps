// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VolumeProfile
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2B66E60", Offset = "0x2B65460", VA = "0x182B66E60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F7E")]
		[Address(RVA = "0x2B66E70", Offset = "0x2B65470", VA = "0x182B66E70")]
		set
		{
		}
	}

	[Token(Token = "0x6000F7F")]
	[Address(RVA = "0x2B66AC0", Offset = "0x2B650C0", VA = "0x182B66AC0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000F80")]
	[Address(RVA = "0x2B669D0", Offset = "0x2B64FD0", VA = "0x182B669D0")]
	internal void OnDisable()
	{
	}

	[Token(Token = "0x6000F81")]
	[Address(RVA = "0x2B66CF0", Offset = "0x2B652F0", VA = "0x182B66CF0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6000F82")]
	public T Add<T>(bool overrides = false) where T : VolumeComponent
	{
		return null;
	}

	[Token(Token = "0x6000F83")]
	[Address(RVA = "0x2B663E0", Offset = "0x2B649E0", VA = "0x182B663E0")]
	public VolumeComponent Add(Type type, bool overrides = false)
	{
		return null;
	}

	[Token(Token = "0x6000F84")]
	public void Remove<T>() where T : VolumeComponent
	{
	}

	[Token(Token = "0x6000F85")]
	[Address(RVA = "0x2B66BE0", Offset = "0x2B651E0", VA = "0x182B66BE0")]
	public void Remove(Type type)
	{
	}

	[Token(Token = "0x6000F86")]
	public bool Has<T>() where T : VolumeComponent
	{
		return default(bool);
	}

	[Token(Token = "0x6000F87")]
	[Address(RVA = "0x2B66850", Offset = "0x2B64E50", VA = "0x182B66850")]
	public bool Has(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F88")]
	[Address(RVA = "0x2B666E0", Offset = "0x2B64CE0", VA = "0x182B666E0")]
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
	[Address(RVA = "0x2B66520", Offset = "0x2B64B20", VA = "0x182B66520")]
	internal int GetComponentListHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8E")]
	[Address(RVA = "0x2B665F0", Offset = "0x2B64BF0", VA = "0x182B665F0")]
	public int GetStateHash()
	{
		return default(int);
	}

	[Token(Token = "0x6000F8F")]
	[Address(RVA = "0x2B66D00", Offset = "0x2B65300", VA = "0x182B66D00")]
	internal void Sanitize()
	{
	}

	[Token(Token = "0x6000F90")]
	[Address(RVA = "0x2B66DE0", Offset = "0x2B653E0", VA = "0x182B66DE0")]
	public VolumeProfile()
	{
	}
}
