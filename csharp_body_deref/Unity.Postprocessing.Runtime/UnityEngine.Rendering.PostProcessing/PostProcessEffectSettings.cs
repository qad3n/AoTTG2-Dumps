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
	[Address(RVA = "0x48292A0", Offset = "0x48292A0", VA = "0x48292A0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x4829840", Offset = "0x4829840", VA = "0x4829840")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x4829B30", Offset = "0x4829B30", VA = "0x4829B30")]
	public void SetAllOverridesTo(bool state, bool excludeEnabled = true)
	{
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x4829E30", Offset = "0x4829E30", VA = "0x4829E30", Slot = "4")]
	public virtual bool IsEnabledAndSupported(PostProcessRenderContext context)
	{
		return default(bool);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x4829E50", Offset = "0x4829E50", VA = "0x4829E50")]
	public int GetHash()
	{
		return default(int);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x482A160", Offset = "0x482A160", VA = "0x482A160")]
	public PostProcessEffectSettings()
	{
	}
}
