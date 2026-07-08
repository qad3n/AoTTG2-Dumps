using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001D6")]
[AttributeUsage(AttributeTargets.Class, AllowMultiple = false)]
public class VolumeComponentMenu : Attribute
{
	[Token(Token = "0x40007FF")]
	[FieldOffset(Offset = "0x10")]
	public readonly string menu;

	[Token(Token = "0x6000D5F")]
	[Address(RVA = "0x48E1500", Offset = "0x48E1500", VA = "0x48E1500")]
	public VolumeComponentMenu(string menu)
	{
	}
}
