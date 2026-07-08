using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200033B")]
[ComVisible(true)]
public class ActivatedServiceTypeEntry : TypeEntry
{
	[Token(Token = "0x4000E6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private Type obj_type;

	[Token(Token = "0x1700032C")]
	public Type ObjectType
	{
		[Token(Token = "0x6001C16")]
		[Address(RVA = "0x4E79CD0", Offset = "0x4E79CD0", VA = "0x4E79CD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001C15")]
	[Address(RVA = "0x4E79BC0", Offset = "0x4E79BC0", VA = "0x4E79BC0")]
	public ActivatedServiceTypeEntry(string typeName, string assemblyName)
	{
	}

	[Token(Token = "0x6001C17")]
	[Address(RVA = "0x4E79CE0", Offset = "0x4E79CE0", VA = "0x4E79CE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
