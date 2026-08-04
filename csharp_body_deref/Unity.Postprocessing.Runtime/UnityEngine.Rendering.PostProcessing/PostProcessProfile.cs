// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessProfile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000071")]
public sealed class PostProcessProfile : ScriptableObject
{
	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("A list of all settings currently stored in this profile.")]
	public List<PostProcessEffectSettings> settings;

	[NonSerialized]
	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x20")]
	public bool isDirty;

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4B5DC70", Offset = "0x4B5DC70", VA = "0x4B5DC70")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000173")]
	public T AddSettings<T>() where T : PostProcessEffectSettings
	{
		return null;
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4B5DDA0", Offset = "0x4B5DDA0", VA = "0x4B5DDA0")]
	public PostProcessEffectSettings AddSettings(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4B5CE30", Offset = "0x4B5CE30", VA = "0x4B5CE30")]
	public PostProcessEffectSettings AddSettings(PostProcessEffectSettings effect)
	{
		return null;
	}

	[Token(Token = "0x6000176")]
	public void RemoveSettings<T>() where T : PostProcessEffectSettings
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4B5E110", Offset = "0x4B5E110", VA = "0x4B5E110")]
	public void RemoveSettings(Type type)
	{
	}

	[Token(Token = "0x6000178")]
	public bool HasSettings<T>() where T : PostProcessEffectSettings
	{
		return default(bool);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4B5DF40", Offset = "0x4B5DF40", VA = "0x4B5DF40")]
	public bool HasSettings(Type type)
	{
		return default(bool);
	}

	[Token(Token = "0x600017A")]
	public T GetSetting<T>() where T : PostProcessEffectSettings
	{
		return null;
	}

	[Token(Token = "0x600017B")]
	public bool TryGetSettings<T>(out T outSetting) where T : PostProcessEffectSettings
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4B5E250", Offset = "0x4B5E250", VA = "0x4B5E250")]
	public PostProcessProfile()
	{
	}
}
