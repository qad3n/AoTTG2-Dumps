using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x2000083")]
public sealed class PropertySheet
{
	[Token(Token = "0x17000033")]
	public MaterialPropertyBlock properties
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x483BEA0", Offset = "0x483BEA0", VA = "0x483BEA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x483BEB0", Offset = "0x483BEB0", VA = "0x483BEB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000034")]
	internal Material material
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x483BEC0", Offset = "0x483BEC0", VA = "0x483BEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x483BED0", Offset = "0x483BED0", VA = "0x483BED0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x483BEE0", Offset = "0x483BEE0", VA = "0x483BEE0")]
	internal PropertySheet(Material material)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4824430", Offset = "0x4824430", VA = "0x4824430")]
	public void ClearKeywords()
	{
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4824480", Offset = "0x4824480", VA = "0x4824480")]
	public void EnableKeyword(string keyword)
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x483BF60", Offset = "0x483BF60", VA = "0x483BF60")]
	public void DisableKeyword(string keyword)
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x483BF80", Offset = "0x483BF80", VA = "0x483BF80")]
	internal void Release()
	{
	}
}
