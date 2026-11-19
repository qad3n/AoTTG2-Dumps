// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.FormattableStringFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x200047C")]
public static class FormattableStringFactory
{
	[Token(Token = "0x200047D")]
	private sealed class ConcreteFormattableString : FormattableString
	{
		[Token(Token = "0x4001262")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _format;

		[Token(Token = "0x4001263")]
		[FieldOffset(Offset = "0x18")]
		private readonly object[] _arguments;

		[Token(Token = "0x17000471")]
		public override string Format
		{
			[Token(Token = "0x60022C1")]
			[Address(RVA = "0x53C88A0", Offset = "0x53C78A0", VA = "0x53C88A0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000472")]
		public override int ArgumentCount
		{
			[Token(Token = "0x60022C3")]
			[Address(RVA = "0x53C88C0", Offset = "0x53C78C0", VA = "0x53C88C0", Slot = "7")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60022C0")]
		[Address(RVA = "0x53C8860", Offset = "0x53C7860", VA = "0x53C8860")]
		internal ConcreteFormattableString(string format, object[] arguments)
		{
		}

		[Token(Token = "0x60022C2")]
		[Address(RVA = "0x53C88B0", Offset = "0x53C78B0", VA = "0x53C88B0", Slot = "6")]
		public override object[] GetArguments()
		{
			return null;
		}

		[Token(Token = "0x60022C4")]
		[Address(RVA = "0x53C88E0", Offset = "0x53C78E0", VA = "0x53C88E0", Slot = "8")]
		public override object GetArgument(int index)
		{
			return null;
		}

		[Token(Token = "0x60022C5")]
		[Address(RVA = "0x53C8910", Offset = "0x53C7910", VA = "0x53C8910", Slot = "9")]
		public override string ToString(IFormatProvider formatProvider)
		{
			return null;
		}
	}

	[Token(Token = "0x60022BF")]
	[Address(RVA = "0x53C8780", Offset = "0x53C7780", VA = "0x53C8780")]
	public static FormattableString Create(string format, params object[] arguments)
	{
		return null;
	}
}
