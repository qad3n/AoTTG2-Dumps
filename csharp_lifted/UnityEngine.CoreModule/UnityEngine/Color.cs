// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Color
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200013C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Math/Color.h")]
[DefaultMember("Item")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.NativeClass("ColorRGBAf")]
public struct Color : IEquatable<Color>, IFormattable
{
	[Token(Token = "0x400051E")]
	[FieldOffset(Offset = "0x0")]
	public float r;

	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x4")]
	public float g;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x8")]
	public float b;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0xC")]
	public float a;

	[Token(Token = "0x170001C6")]
	public readonly Color linear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x68FC580", Offset = "0x68FB580", VA = "0x68FC580")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C7")]
	public readonly Color gamma
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x68FC690", Offset = "0x68FB690", VA = "0x68FC690")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001C8")]
	public readonly float maxColorComponent
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x68FC7A0", Offset = "0x68FB7A0", VA = "0x68FC7A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170001C9")]
	public static Color black
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A2E")]
		[Address(RVA = "0x68FCD50", Offset = "0x68FBD50", VA = "0x68FCD50")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CA")]
	public static Color blue
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A2F")]
		[Address(RVA = "0x68FCD60", Offset = "0x68FBD60", VA = "0x68FCD60")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CB")]
	public static Color clear
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A30")]
		[Address(RVA = "0x68FCD70", Offset = "0x68FBD70", VA = "0x68FCD70")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CC")]
	public static Color gray
	{
		[Token(Token = "0x6000A31")]
		[Address(RVA = "0x68FCD80", Offset = "0x68FBD80", VA = "0x68FCD80")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CD")]
	public static Color grey
	{
		[Token(Token = "0x6000A32")]
		[Address(RVA = "0x68FCD90", Offset = "0x68FBD90", VA = "0x68FCD90")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CE")]
	public static Color gray5
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A33")]
		[Address(RVA = "0x68FCDA0", Offset = "0x68FBDA0", VA = "0x68FCDA0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001CF")]
	public static Color green
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A34")]
		[Address(RVA = "0x68FCDB0", Offset = "0x68FBDB0", VA = "0x68FCDB0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001D0")]
	public static Color magenta
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A35")]
		[Address(RVA = "0x68FCDC0", Offset = "0x68FBDC0", VA = "0x68FCDC0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001D1")]
	public static Color red
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A36")]
		[Address(RVA = "0x68FCDD0", Offset = "0x68FBDD0", VA = "0x68FCDD0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001D2")]
	public static Color white
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A37")]
		[Address(RVA = "0x68FCDE0", Offset = "0x68FBDE0", VA = "0x68FCDE0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x170001D3")]
	public static Color yellow
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000A38")]
		[Address(RVA = "0x68FCDF0", Offset = "0x68FBDF0", VA = "0x68FCDF0")]
		get
		{
			return default(Color);
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x68FBF90", Offset = "0x68FAF90", VA = "0x68FBF90")]
	public Color(float r, float g, float b, float a)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x68FBFB0", Offset = "0x68FAFB0", VA = "0x68FBFB0")]
	public Color(float r, float g, float b)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x68FBFD0", Offset = "0x68FAFD0", VA = "0x68FBFD0", Slot = "3")]
	public override readonly string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x68FBFE0", Offset = "0x68FAFE0", VA = "0x68FBFE0", Slot = "5")]
	public readonly string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x68FC220", Offset = "0x68FB220", VA = "0x68FC220", Slot = "2")]
	public override readonly int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x68FC280", Offset = "0x68FB280", VA = "0x68FC280", Slot = "0")]
	public override readonly bool Equals(object other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x68FC350", Offset = "0x68FB350", VA = "0x68FC350", Slot = "4")]
	public readonly bool Equals(Color other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x68FC3C0", Offset = "0x68FB3C0", VA = "0x68FC3C0")]
	public readonly bool Equals(in Color other)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x68FC430", Offset = "0x68FB430", VA = "0x68FC430")]
	public static Color operator +(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x68FC440", Offset = "0x68FB440", VA = "0x68FC440")]
	public static Color operator -(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x68FC450", Offset = "0x68FB450", VA = "0x68FC450")]
	public static Color operator *(Color a, Color b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x68FC460", Offset = "0x68FB460", VA = "0x68FC460")]
	public static Color operator *(Color a, float b)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x68FC480", Offset = "0x68FB480", VA = "0x68FC480")]
	public static bool operator ==(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x68FC4C0", Offset = "0x68FB4C0", VA = "0x68FC4C0")]
	public static bool operator !=(Color lhs, Color rhs)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x68FC500", Offset = "0x68FB500", VA = "0x68FC500")]
	public static Color Lerp(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x68FC540", Offset = "0x68FB540", VA = "0x68FC540")]
	public static Color LerpUnclamped(Color a, Color b, float t)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x68FC560", Offset = "0x68FB560", VA = "0x68FC560")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal readonly Color RGBMultiplied(float multiplier)
	{
		return default(Color);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A28")]
	[Address(RVA = "0x68FC7B0", Offset = "0x68FB7B0", VA = "0x68FC7B0")]
	public static implicit operator Vector4(Color c)
	{
		return default(Vector4);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x68FC7C0", Offset = "0x68FB7C0", VA = "0x68FC7C0")]
	public static implicit operator Color(Vector4 v)
	{
		return default(Color);
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x68FC7D0", Offset = "0x68FB7D0", VA = "0x68FC7D0")]
	public static void RGBToHSV(Color rgbColor, out float H, out float S, out float V)
	{
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x68FC950", Offset = "0x68FB950", VA = "0x68FC950")]
	private static void RGBToHSVHelper(float offset, float dominantcolor, float colorone, float colortwo, out float H, out float S, out float V)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x68FC9D0", Offset = "0x68FB9D0", VA = "0x68FC9D0")]
	public static Color HSVToRGB(float H, float S, float V)
	{
		return default(Color);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x68FCB80", Offset = "0x68FBB80", VA = "0x68FCB80")]
	public static Color HSVToRGB(float H, float S, float V, bool hdr)
	{
		return default(Color);
	}
}
