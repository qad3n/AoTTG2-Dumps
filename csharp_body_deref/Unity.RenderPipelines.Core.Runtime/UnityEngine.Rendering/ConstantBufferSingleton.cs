using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200006A")]
internal class ConstantBufferSingleton<CBType> : ConstantBuffer<CBType> where CBType : struct
{
	[Token(Token = "0x40001B9")]
	[FieldOffset(Offset = "0x0")]
	private static ConstantBufferSingleton<CBType> s_Instance;

	[Token(Token = "0x17000050")]
	internal static ConstantBufferSingleton<CBType> instance
	{
		[Token(Token = "0x600057B")]
		get
		{
			return null;
		}
		[Token(Token = "0x600057C")]
		set
		{
		}
	}

	[Token(Token = "0x600057D")]
	public override void Release()
	{
	}

	[Token(Token = "0x600057E")]
	public ConstantBufferSingleton()
	{
	}
}
