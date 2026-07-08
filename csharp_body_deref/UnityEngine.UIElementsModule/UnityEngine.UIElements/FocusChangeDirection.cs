using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000203")]
public class FocusChangeDirection : IDisposable
{
	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Value;

	[Token(Token = "0x17000267")]
	public static FocusChangeDirection unspecified
	{
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x4D170A0", Offset = "0x4D170A0", VA = "0x4D170A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000268")]
	public static FocusChangeDirection none
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x4D17110", Offset = "0x4D17110", VA = "0x4D17110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000269")]
	protected static FocusChangeDirection lastValue
	{
		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x4D17180", Offset = "0x4D17180", VA = "0x4D17180")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x4D171F0", Offset = "0x4D171F0", VA = "0x4D171F0")]
	protected FocusChangeDirection(int value)
	{
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x4D17210", Offset = "0x4D17210", VA = "0x4D17210")]
	public static implicit operator int(FocusChangeDirection fcd)
	{
		return default(int);
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x4D17220", Offset = "0x4D17220", VA = "0x4D17220", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x4D17240", Offset = "0x4D17240", VA = "0x4D17240", Slot = "5")]
	protected virtual void Dispose()
	{
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x4D17250", Offset = "0x4D17250", VA = "0x4D17250", Slot = "6")]
	internal virtual void ApplyTo(FocusController focusController, Focusable f)
	{
	}
}
