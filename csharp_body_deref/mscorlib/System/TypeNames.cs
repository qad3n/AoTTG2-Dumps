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
		[Address(RVA = "0x5035990", Offset = "0x5035990", VA = "0x5035990", Slot = "5")]
		public bool Equals(System.TypeName other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001067")]
		[Address(RVA = "0x5035A60", Offset = "0x5035A60", VA = "0x5035A60", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001068")]
		[Address(RVA = "0x5035AA0", Offset = "0x5035AA0", VA = "0x5035AA0", Slot = "0")]
		public override bool Equals(object other)
		{
			return default(bool);
		}

		[Token(Token = "0x6001069")]
		[Address(RVA = "0x5035BA0", Offset = "0x5035BA0", VA = "0x5035BA0")]
		protected ATypeName()
		{
		}
	}
}
