// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FocusChangeDirection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000257")]
public class FocusChangeDirection : IDisposable
{
	[Token(Token = "0x4000897")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Value;

	[Token(Token = "0x1700030C")]
	public static FocusChangeDirection unspecified
	{
		[Token(Token = "0x6000F94")]
		[Address(RVA = "0x32629B0", Offset = "0x3260FB0", VA = "0x1832629B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030D")]
	public static FocusChangeDirection none
	{
		[Token(Token = "0x6000F95")]
		[Address(RVA = "0x3262960", Offset = "0x3260F60", VA = "0x183262960")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030E")]
	protected static FocusChangeDirection lastValue
	{
		[Token(Token = "0x6000F96")]
		[Address(RVA = "0x3262910", Offset = "0x3260F10", VA = "0x183262910")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	protected FocusChangeDirection(int value)
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x3262A00", Offset = "0x3261000", VA = "0x183262A00")]
	public static implicit operator int(FocusChangeDirection fcd)
	{
		return default(int);
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x21B8EA0", Offset = "0x21B74A0", VA = "0x1821B8EA0", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Dispose()
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x32627B0", Offset = "0x3260DB0", VA = "0x1832627B0", Slot = "6")]
	internal virtual void ApplyTo(FocusController focusController, Focusable f)
	{
	}
}
