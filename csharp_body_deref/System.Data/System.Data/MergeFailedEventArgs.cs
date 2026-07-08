using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200006A")]
public class MergeFailedEventArgs : EventArgs
{
	[Token(Token = "0x4000246")]
	[FieldOffset(Offset = "0x10")]
	[CompilerGenerated]
	private readonly DataTable _003CTable_003Ek__BackingField;

	[Token(Token = "0x1700011F")]
	public string Conflict
	{
		[Token(Token = "0x60006C4")]
		[Address(RVA = "0x427BB60", Offset = "0x427BB60", VA = "0x427BB60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x427BAE0", Offset = "0x427BAE0", VA = "0x427BAE0")]
	public MergeFailedEventArgs(DataTable table, string conflict)
	{
	}
}
