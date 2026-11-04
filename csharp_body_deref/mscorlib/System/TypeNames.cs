// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeNames
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001D3")]
internal class TypeNames
{
	[Token(Token = "0x20001D4")]
	internal abstract class ATypeName : System.TypeName, IEquatable<System.TypeName>
	{
		[Token(Token = "0x1700017E")]
		public abstract string DisplayName
		{
			[Token(Token = "0x60010BC")]
			get;
		}

		[Token(Token = "0x60010BD")]
		[Address(RVA = "0x1B7A5B0", Offset = "0x1B78BB0", VA = "0x181B7A5B0", Slot = "5")]
		public bool Equals(System.TypeName other)
		{
			return default(bool);
		}

		[Token(Token = "0x60010BE")]
		[Address(RVA = "0x1B7A790", Offset = "0x1B78D90", VA = "0x181B7A790", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60010BF")]
		[Address(RVA = "0x1B7A690", Offset = "0x1B78C90", VA = "0x181B7A690", Slot = "0")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x60010C0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		protected ATypeName()
		{
		}
	}
}
