using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200016A")]
public interface IShaderVariantSettings
{
	[Token(Token = "0x17000134")]
	ShaderVariantLogLevel shaderVariantLogLevel
	{
		[Token(Token = "0x6000ABE")]
		get;
		[Token(Token = "0x6000ABF")]
		set;
	}

	[Token(Token = "0x17000135")]
	bool exportShaderVariants
	{
		[Token(Token = "0x6000AC0")]
		get;
		[Token(Token = "0x6000AC1")]
		set;
	}

	[Token(Token = "0x17000136")]
	bool stripDebugVariants
	{
		[Token(Token = "0x6000AC2")]
		[Address(RVA = "0x48B9960", Offset = "0x48B9960", VA = "0x48B9960", Slot = "4")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AC3")]
		[Address(RVA = "0x48B9970", Offset = "0x48B9970", VA = "0x48B9970", Slot = "5")]
		set
		{
		}
	}
}
