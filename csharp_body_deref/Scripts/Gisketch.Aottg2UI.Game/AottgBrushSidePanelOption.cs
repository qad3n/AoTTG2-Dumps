using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001A8")]
public readonly struct AottgBrushSidePanelOption
{
	[Token(Token = "0x400094B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly string _id;

	[Token(Token = "0x400094C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public readonly string Label;

	[Token(Token = "0x400094D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public readonly string TextKey;

	[Token(Token = "0x400094E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public readonly string Icon;

	[Token(Token = "0x400094F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public readonly string ActionId;

	[Token(Token = "0x4000950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public readonly Action<GisketchActionContext> Action;

	[Token(Token = "0x17000115")]
	public string Id
	{
		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x4102420", Offset = "0x4102420", VA = "0x4102420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x40F9900", Offset = "0x40F9900", VA = "0x40F9900")]
	public AottgBrushSidePanelOption(string label, string actionId, string icon)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x4102ED0", Offset = "0x4102ED0", VA = "0x4102ED0")]
	public AottgBrushSidePanelOption(string id, string label, string actionId, string icon, [Optional] string textKey)
	{
	}

	[Token(Token = "0x60009B6")]
	[Address(RVA = "0x4102F50", Offset = "0x4102F50", VA = "0x4102F50")]
	public AottgBrushSidePanelOption(string label, Action<GisketchActionContext> action, string icon)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x4102FE0", Offset = "0x4102FE0", VA = "0x4102FE0")]
	public AottgBrushSidePanelOption(string id, string label, Action<GisketchActionContext> action, string icon, [Optional] string textKey)
	{
	}
}
