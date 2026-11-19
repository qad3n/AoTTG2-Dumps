// ==================== AoTTG2 cross-reference ====================
// Type: System.TypeIdentifiers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20001AD")]
internal class TypeIdentifiers
{
	[Token(Token = "0x20001AE")]
	private class Display : System.TypeNames.ATypeName, System.TypeIdentifier, System.TypeName, IEquatable<System.TypeName>
	{
		[Token(Token = "0x400086F")]
		[FieldOffset(Offset = "0x10")]
		private string displayName;

		[Token(Token = "0x4000870")]
		[FieldOffset(Offset = "0x18")]
		private string internal_name;

		[Token(Token = "0x1700017E")]
		public override string DisplayName
		{
			[Token(Token = "0x600109A")]
			[Address(RVA = "0x551EAB0", Offset = "0x551DAB0", VA = "0x551EAB0", Slot = "6")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x1700017F")]
		public string InternalName
		{
			[Token(Token = "0x600109B")]
			[Address(RVA = "0x551EAC0", Offset = "0x551DAC0", VA = "0x551EAC0", Slot = "7")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001099")]
		[Address(RVA = "0x551EA80", Offset = "0x551DA80", VA = "0x551EA80")]
		internal Display(string displayName)
		{
		}

		[Token(Token = "0x600109C")]
		[Address(RVA = "0x551EB00", Offset = "0x551DB00", VA = "0x551EB00")]
		private string GetInternalName()
		{
			return null;
		}
	}

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x551EA10", Offset = "0x551DA10", VA = "0x551EA10")]
	internal static System.TypeIdentifier FromDisplay(string displayName)
	{
		return null;
	}
}
