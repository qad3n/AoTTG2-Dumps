// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessEffectSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Serializable]
[Token(Token = "0x2000063")]
public class PostProcessEffectSettings : ScriptableObject
{
	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x18")]
	public bool active;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x20")]
	public BoolParameter enabled;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0x28")]
	internal ReadOnlyCollection<ParameterOverride> parameters;

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x4B4E390", Offset = "0x4B4E390", VA = "0x4B4E390")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4B4E930", Offset = "0x4B4E930", VA = "0x4B4E930")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4B4EC20", Offset = "0x4B4EC20", VA = "0x4B4EC20")]
	public void SetAllOverridesTo(bool state, bool excludeEnabled = true)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4B4EF20", Offset = "0x4B4EF20", VA = "0x4B4EF20", Slot = "4")]
	public virtual bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4B4EF40", Offset = "0x4B4EF40", VA = "0x4B4EF40")]
	public int GetHash()
	{
		return default(int);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x4B4F250", Offset = "0x4B4F250", VA = "0x4B4F250")]
	public PostProcessEffectSettings()
	{
	}
}
