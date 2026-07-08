using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004E1")]
public class ManifestResourceInfo
{
	[Token(Token = "0x170004AF")]
	public virtual Assembly ReferencedAssembly
	{
		[Token(Token = "0x6002429")]
		[Address(RVA = "0x4EEC740", Offset = "0x4EEC740", VA = "0x4EEC740", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B0")]
	public virtual string FileName
	{
		[Token(Token = "0x600242A")]
		[Address(RVA = "0x4EEC750", Offset = "0x4EEC750", VA = "0x4EEC750", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B1")]
	public virtual ResourceLocation ResourceLocation
	{
		[Token(Token = "0x600242B")]
		[Address(RVA = "0x4EEC760", Offset = "0x4EEC760", VA = "0x4EEC760", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return default(ResourceLocation);
		}
	}

	[Token(Token = "0x6002428")]
	[Address(RVA = "0x4EEC6F0", Offset = "0x4EEC6F0", VA = "0x4EEC6F0")]
	public ManifestResourceInfo(Assembly containingAssembly, string containingFileName, ResourceLocation resourceLocation)
	{
	}
}
