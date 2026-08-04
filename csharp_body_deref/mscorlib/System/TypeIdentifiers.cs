// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeIdentifiers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x3D1B770", Offset = "0x3D1B770", VA = "0x3D1B770", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017E")]
		public string InternalName
		{
			[Token(Token = "0x600106D")]
			[Address(RVA = "0x3D1B780", Offset = "0x3D1B780", VA = "0x3D1B780", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600106B")]
		[Address(RVA = "0x3D1B740", Offset = "0x3D1B740", VA = "0x3D1B740")]
		internal Display(string displayName)
		{
		}

		[Token(Token = "0x600106E")]
		[Address(RVA = "0x3D1B7C0", Offset = "0x3D1B7C0", VA = "0x3D1B7C0")]
		private string GetInternalName()
		{
			return null;
		}
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x3D1B6D0", Offset = "0x3D1B6D0", VA = "0x3D1B6D0")]
	internal static System.TypeIdentifier FromDisplay(string displayName)
	{
		return null;
	}
}
