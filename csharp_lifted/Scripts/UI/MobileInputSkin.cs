// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputSkin
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputSkin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Serializable]
[Token(Token = "0x200074C")]
public class MobileInputSkin
{
	[Token(Token = "0x40024C3")]
	[FieldOffset(Offset = "0x10")]
	public float R;

	[Token(Token = "0x40024C4")]
	[FieldOffset(Offset = "0x14")]
	public float G;

	[Token(Token = "0x40024C5")]
	[FieldOffset(Offset = "0x18")]
	public float B;

	[Token(Token = "0x40024C6")]
	[FieldOffset(Offset = "0x1C")]
	public float A;

	[Token(Token = "0x40024C7")]
	[FieldOffset(Offset = "0x20")]
	public string Image;

	[Token(Token = "0x40024C8")]
	[FieldOffset(Offset = "0x28")]
	public bool PreserveAspect;

	[Token(Token = "0x60046B6")]
	[Address(RVA = "0x5B72BE0", Offset = "0x5B71BE0", VA = "0x5B72BE0")]
	public MobileInputSkin(float r, float g, float b, float a)
	{
		// Lifted from source/cpp/UI/MobileInputSkin.c (UI.MobileInputSkin$$.ctor): clean
		this.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.PreserveAspect = true;
		base();
		this.R = r;
		this.G = g;
		this.B = b;
		this.A = a;
		return;
	}

	[Token(Token = "0x60046B7")]
	[Address(RVA = "0x5B72C70", Offset = "0x5B71C70", VA = "0x5B72C70")]
	public MobileInputSkin()
	{
		// Lifted from source/cpp/UI/MobileInputSkin.c (UI.MobileInputSkin$$.ctor): clean
		this.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		this.PreserveAspect = true;
		base();
		return;
	}

	[Token(Token = "0x60046B8")]
	[Address(RVA = "0x5B6D640", Offset = "0x5B6C640", VA = "0x5B6D640")]
	public Color ToColor()
	{
		// Lifted from source/cpp/UI/MobileInputSkin.c (UI.MobileInputSkin$$ToColor): clean
		Color UVar1;

		UVar1.r = this.R;
		UVar1.g = this.G;
		UVar1.b = this.B;
		UVar1.a = this.A;
		return (Color)UVar1;
	}

	[Token(Token = "0x60046B9")]
	[Address(RVA = "0x5B6D530", Offset = "0x5B6C530", VA = "0x5B6D530")]
	public bool HasImage()
	{
		// Lifted from source/cpp/UI/MobileInputSkin.c (UI.MobileInputSkin$$HasImage): clean
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(this.Image);
		return !bVar1;
	}

	[Token(Token = "0x60046BA")]
	[Address(RVA = "0x5B72CB0", Offset = "0x5B71CB0", VA = "0x5B72CB0")]
	public MobileInputSkin Clone()
	{
		// Lifted from source/cpp/UI/MobileInputSkin.c (UI.MobileInputSkin$$Clone): 2 lines keep C-only constructs
		String* targetAddress;
		float fVar1;
		float fVar2;
		float fVar3;
		float fVar4;
		MobileInputSkin __this_00;

		fVar1 = this.R;
		fVar2 = this.G;
		fVar3 = this.B;
		fVar4 = this.A;
		targetAddress = &__this_00.Image;
		__this_00.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00.PreserveAspect = true;
		__this_00 = new MobileInputSkin();
		__this_00.R = fVar1;
		__this_00.G = fVar2;
		__this_00.B = fVar3;
		__this_00.A = fVar4;
		__this_00.Image = this.Image;
		__this_00.PreserveAspect = this.PreserveAspect;
		return __this_00;
	}

	[Token(Token = "0x60046BB")]
	[Address(RVA = "0x5B72D60", Offset = "0x5B71D60", VA = "0x5B72D60")]
	public static MobileInputSkin FromColor(Color color)
	{
		// Lifted from source/cpp/UI/MobileInputSkin.c (UI.MobileInputSkin$$FromColor): clean
		MobileInputSkin __this;
		float local_28;
		float fStack_24;

		__this.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this.PreserveAspect = true;
		__this = new MobileInputSkin();
		local_28 = color.r;
		fStack_24 = color.g;
		__this.R = local_28;
		__this.G = fStack_24;
		__this.B = color.b;
		__this.A = color.a;
		return __this;
	}
}
