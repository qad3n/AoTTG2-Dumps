using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x20001DC")]
public class fsConverterRegistrar
{
	[Token(Token = "0x400095C")]
	[FieldOffset(Offset = "0x0")]
	public static AnimationCurve_DirectConverter Register_AnimationCurve_DirectConverter;

	[Token(Token = "0x400095D")]
	[FieldOffset(Offset = "0x8")]
	public static Bounds_DirectConverter Register_Bounds_DirectConverter;

	[Token(Token = "0x400095E")]
	[FieldOffset(Offset = "0x10")]
	public static GUIStyleState_DirectConverter Register_GUIStyleState_DirectConverter;

	[Token(Token = "0x400095F")]
	[FieldOffset(Offset = "0x18")]
	public static GUIStyle_DirectConverter Register_GUIStyle_DirectConverter;

	[Token(Token = "0x4000960")]
	[FieldOffset(Offset = "0x20")]
	public static Gradient_DirectConverter Register_Gradient_DirectConverter;

	[Token(Token = "0x4000961")]
	[FieldOffset(Offset = "0x28")]
	public static Keyframe_DirectConverter Register_Keyframe_DirectConverter;

	[Token(Token = "0x4000962")]
	[FieldOffset(Offset = "0x30")]
	public static LayerMask_DirectConverter Register_LayerMask_DirectConverter;

	[Token(Token = "0x4000963")]
	[FieldOffset(Offset = "0x38")]
	public static RectOffset_DirectConverter Register_RectOffset_DirectConverter;

	[Token(Token = "0x4000964")]
	[FieldOffset(Offset = "0x40")]
	public static Rect_DirectConverter Register_Rect_DirectConverter;

	[Token(Token = "0x4000965")]
	[FieldOffset(Offset = "0x48")]
	public static List<Type> Converters;

	[Token(Token = "0x6001165")]
	[Address(RVA = "0x4A43E10", Offset = "0x4A43E10", VA = "0x4A43E10")]
	static fsConverterRegistrar()
	{
	}

	[Token(Token = "0x6001166")]
	[Address(RVA = "0x4A44130", Offset = "0x4A44130", VA = "0x4A44130")]
	public fsConverterRegistrar()
	{
	}
}
