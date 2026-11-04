// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Resolution
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/BloomOptimized.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000D9")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Resolution : IEquatable<Resolution>
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x0")]
	private int m_Width;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x4")]
	private int m_Height;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x8")]
	private RefreshRate m_RefreshRate;

	[Token(Token = "0x170000D3")]
	public int width
	{
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0xD18930", Offset = "0xD16F30", VA = "0x180D18930")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004CB")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		set
		{
		}
	}

	[Token(Token = "0x170000D4")]
	public int height
	{
		[Token(Token = "0x60004CC")]
		[Address(RVA = "0xD161B0", Offset = "0xD147B0", VA = "0x180D161B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004CD")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		set
		{
		}
	}

	[Token(Token = "0x170000D5")]
	public RefreshRate refreshRateRatio
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x1B943C0", Offset = "0x1B929C0", VA = "0x181B943C0")]
		get
		{
			return default(RefreshRate);
		}
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x2ED3930", Offset = "0x2ED1F30", VA = "0x182ED3930", Slot = "4")]
	public bool Equals(Resolution other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x2ED3850", Offset = "0x2ED1E50", VA = "0x182ED3850", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x2ED3990", Offset = "0x2ED1F90", VA = "0x182ED3990", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004D2")]
	[Address(RVA = "0x2ED3A10", Offset = "0x2ED2010", VA = "0x182ED3A10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
