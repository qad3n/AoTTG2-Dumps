using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200019D")]
public static class UnityObjectOwnershipUtility
{
	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x4A388D0", Offset = "0x4A388D0", VA = "0x4A388D0")]
	public static void CopyOwner(object source, object destination)
	{
	}

	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x4A38A90", Offset = "0x4A38A90", VA = "0x4A38A90")]
	public static void RemoveOwner(object o)
	{
	}

	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x4A38990", Offset = "0x4A38990", VA = "0x4A38990")]
	public static Object GetOwner(object o)
	{
		return null;
	}
}
