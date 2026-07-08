using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200010C")]
public class DocumentationInfo
{
	[Token(Token = "0x400039E")]
	private const string fallbackVersion = "13.1";

	[Token(Token = "0x400039F")]
	private const string url = "https://docs.unity3d.com/Packages/{0}@{1}/manual/{2}.html{3}";

	[Token(Token = "0x170000F1")]
	public static string version
	{
		[Token(Token = "0x60008AA")]
		[Address(RVA = "0x488B230", Offset = "0x488B230", VA = "0x488B230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x488B260", Offset = "0x488B260", VA = "0x488B260")]
	public static string GetPageLink(string packageName, string pageName)
	{
		return null;
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x488B080", Offset = "0x488B080", VA = "0x488B080")]
	public static string GetPageLink(string packageName, string pageName, string pageHash)
	{
		return null;
	}

	[Token(Token = "0x60008AD")]
	[Address(RVA = "0x488B400", Offset = "0x488B400", VA = "0x488B400")]
	public DocumentationInfo()
	{
	}
}
