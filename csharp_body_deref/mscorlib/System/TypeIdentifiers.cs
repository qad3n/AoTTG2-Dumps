using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AA")]
internal class TypeIdentifiers
{
	[Token(Token = "0x20001AB")]
	private class Display : System.TypeNames.ATypeName, System.TypeIdentifier, System.TypeName, IEquatable<System.TypeName>
	{
		[Token(Token = "0x40008AD")]
		[FieldOffset(Offset = "0x10")]
		private string displayName;

		[Token(Token = "0x40008AE")]
		[FieldOffset(Offset = "0x18")]
		private string internal_name;

		[Token(Token = "0x1700017D")]
		public override string DisplayName
		{
			[Token(Token = "0x600106C")]
			[Address(RVA = "0x5035C50", Offset = "0x5035C50", VA = "0x5035C50", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017E")]
		public string InternalName
		{
			[Token(Token = "0x600106D")]
			[Address(RVA = "0x5035C60", Offset = "0x5035C60", VA = "0x5035C60", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600106B")]
		[Address(RVA = "0x5035C20", Offset = "0x5035C20", VA = "0x5035C20")]
		internal Display(string displayName)
		{
		}

		[Token(Token = "0x600106E")]
		[Address(RVA = "0x5035CA0", Offset = "0x5035CA0", VA = "0x5035CA0")]
		private string GetInternalName()
		{
			return null;
		}
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x5035BB0", Offset = "0x5035BB0", VA = "0x5035BB0")]
	internal static System.TypeIdentifier FromDisplay(string displayName)
	{
		return null;
	}
}
