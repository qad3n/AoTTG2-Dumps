using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Scripting.APIUpdating;

[Token(Token = "0x20001F7")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.Delegate)]
public class MovedFromAttribute : Attribute
{
	[Token(Token = "0x40006AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal MovedFromAttributeData data;

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x4AEC260", Offset = "0x4AEC260", VA = "0x4AEC260")]
	public MovedFromAttribute(bool autoUpdateAPI, [Optional] string sourceNamespace, [Optional] string sourceAssembly, [Optional] string sourceClassName)
	{
	}

	[Token(Token = "0x6000D93")]
	[Address(RVA = "0x4AEC2E0", Offset = "0x4AEC2E0", VA = "0x4AEC2E0")]
	public MovedFromAttribute(string sourceNamespace)
	{
	}
}
