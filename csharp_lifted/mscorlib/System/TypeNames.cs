// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeNames
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AB")]
internal class TypeNames
{
	[Token(Token = "0x20001AC")]
	internal abstract class ATypeName : System.TypeName, IEquatable<System.TypeName>
	{
		[Token(Token = "0x1700017D")]
		public abstract string DisplayName
		{
			[Token(Token = "0x6001093")]
			get;
		}

		[Token(Token = "0x6001094")]
		[Address(RVA = "0x551E7F0", Offset = "0x551D7F0", VA = "0x551E7F0", Slot = "5")]
		public bool Equals(System.TypeName other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001095")]
		[Address(RVA = "0x551E8C0", Offset = "0x551D8C0", VA = "0x551E8C0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001096")]
		[Address(RVA = "0x551E900", Offset = "0x551D900", VA = "0x551E900", Slot = "0")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001097")]
		[Address(RVA = "0x551EA00", Offset = "0x551DA00", VA = "0x551EA00")]
		protected ATypeName()
		{
		}
	}
}
