using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000262")]
public abstract class ConvertBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x1700025F")]
	public Type Type
	{
		[Token(Token = "0x6000BC4")]
		[Address(RVA = "0x41E4660", Offset = "0x41E4660", VA = "0x41E4660")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x41E4670", Offset = "0x41E4670", VA = "0x41E4670")]
	public DynamicMetaObject FallbackConvert(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000BC6")]
	public abstract DynamicMetaObject FallbackConvert(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x41E4690", Offset = "0x41E4690", VA = "0x41E4690", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
