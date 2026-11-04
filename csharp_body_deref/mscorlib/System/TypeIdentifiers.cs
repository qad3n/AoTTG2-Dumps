// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeIdentifiers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001D5")]
internal class TypeIdentifiers
{
	[Token(Token = "0x20001D6")]
	private class Display : System.TypeNames.ATypeName, System.TypeIdentifier, System.TypeName, IEquatable<System.TypeName>
	{
		[Token(Token = "0x4000911")]
		[FieldOffset(Offset = "0x10")]
		private string displayName;

		[Token(Token = "0x4000912")]
		[FieldOffset(Offset = "0x18")]
		private string internal_name;

		[Token(Token = "0x1700017F")]
		public override string DisplayName
		{
			[Token(Token = "0x60010C3")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000180")]
		public string InternalName
		{
			[Token(Token = "0x60010C4")]
			[Address(RVA = "0x1B809E0", Offset = "0x1B7EFE0", VA = "0x181B809E0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60010C2")]
		[Address(RVA = "0x1B809B0", Offset = "0x1B7EFB0", VA = "0x181B809B0")]
		internal Display(string displayName)
		{
		}

		[Token(Token = "0x60010C5")]
		[Address(RVA = "0x1B809A0", Offset = "0x1B7EFA0", VA = "0x181B809A0")]
		private string GetInternalName()
		{
			return null;
		}
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x1B91040", Offset = "0x1B8F640", VA = "0x181B91040")]
	internal static System.TypeIdentifier FromDisplay(string displayName)
	{
		return null;
	}
}
