// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Resolution
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/BloomOptimized.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000DA")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Resolution : IEquatable<Resolution>
{
	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x0")]
	private int m_Width;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x4")]
	private int m_Height;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x8")]
	private RefreshRate m_RefreshRate;

	[Token(Token = "0x170000D9")]
	public int width
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x68D48D0", Offset = "0x68D38D0", VA = "0x68D48D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x68D48E0", Offset = "0x68D38E0", VA = "0x68D48E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000DA")]
	public int height
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x68D48F0", Offset = "0x68D38F0", VA = "0x68D48F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x68D4900", Offset = "0x68D3900", VA = "0x68D4900")]
		set
		{
		}
	}

	[Token(Token = "0x170000DB")]
	public RefreshRate refreshRateRatio
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x68D4910", Offset = "0x68D3910", VA = "0x68D4910")]
		get
		{
			return default(RefreshRate);
		}
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x68D4920", Offset = "0x68D3920", VA = "0x68D4920", Slot = "4")]
	public bool Equals(Resolution other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x68D4970", Offset = "0x68D3970", VA = "0x68D4970", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x68D4A10", Offset = "0x68D3A10", VA = "0x68D4A10", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x68D4A80", Offset = "0x68D3A80", VA = "0x68D4A80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
