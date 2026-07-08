using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200010B")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Enum, AllowMultiple = false)]
public class CoreRPHelpURLAttribute : HelpURLAttribute
{
	[Token(Token = "0x60008A8")]
	[Address(RVA = "0x488B020", Offset = "0x488B020", VA = "0x488B020")]
	public CoreRPHelpURLAttribute(string pageName, string packageName = "com.unity.render-pipelines.core")
	{
	}

	[Token(Token = "0x60008A9")]
	[Address(RVA = "0x488B210", Offset = "0x488B210", VA = "0x488B210")]
	public CoreRPHelpURLAttribute(string pageName, string pageHash, string packageName = "com.unity.render-pipelines.core")
	{
	}
}
