// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.FormattableStringFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004A3")]
public static class FormattableStringFactory
{
	[Token(Token = "0x20004A4")]
	private sealed class ConcreteFormattableString : FormattableString
	{
		[Token(Token = "0x4001302")]
		[FieldOffset(Offset = "0x10")]
		private readonly string _format;

		[Token(Token = "0x4001303")]
		[FieldOffset(Offset = "0x18")]
		private readonly object[] _arguments;

		[Token(Token = "0x17000472")]
		public override string Format
		{
			[Token(Token = "0x60022F4")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000473")]
		public override int ArgumentCount
		{
			[Token(Token = "0x60022F6")]
			[Address(RVA = "0x1A07BE0", Offset = "0x1A061E0", VA = "0x181A07BE0", Slot = "7")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x60022F3")]
		[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
		internal ConcreteFormattableString(string format, object[] arguments)
		{
		}

		[Token(Token = "0x60022F5")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
		public override object[] GetArguments()
		{
			return null;
		}

		[Token(Token = "0x60022F7")]
		[Address(RVA = "0x1A079D0", Offset = "0x1A05FD0", VA = "0x181A079D0", Slot = "8")]
		public override object GetArgument(int index)
		{
			return null;
		}

		[Token(Token = "0x60022F8")]
		[Address(RVA = "0x1A291D0", Offset = "0x1A277D0", VA = "0x181A291D0", Slot = "9")]
		public override string ToString(IFormatProvider formatProvider)
		{
			return null;
		}
	}

	[Token(Token = "0x60022F2")]
	[Address(RVA = "0x1A2A590", Offset = "0x1A28B90", VA = "0x181A2A590")]
	public static FormattableString Create(string format, params object[] arguments)
	{
		return null;
	}
}
