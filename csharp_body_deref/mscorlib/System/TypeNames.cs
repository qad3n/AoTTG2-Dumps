// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeNames
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001A8")]
internal class TypeNames
{
	[Token(Token = "0x20001A9")]
	internal abstract class ATypeName : System.TypeName, IEquatable<System.TypeName>
	{
		[Token(Token = "0x1700017C")]
		public abstract string DisplayName
		{
			[Token(Token = "0x6001065")]
			get;
		}

		[Token(Token = "0x6001066")]
		[Address(RVA = "0x3D1B4B0", Offset = "0x3D1B4B0", VA = "0x3D1B4B0", Slot = "5")]
		public bool Equals(System.TypeName other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001067")]
		[Address(RVA = "0x3D1B580", Offset = "0x3D1B580", VA = "0x3D1B580", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001068")]
		[Address(RVA = "0x3D1B5C0", Offset = "0x3D1B5C0", VA = "0x3D1B5C0", Slot = "0")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001069")]
		[Address(RVA = "0x3D1B6C0", Offset = "0x3D1B6C0", VA = "0x3D1B6C0")]
		protected ATypeName()
		{
		}
	}
}
