using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001CB")]
public interface IGraphDataWithVariables : IGraphData
{
	[Token(Token = "0x170001DF")]
	VariableDeclarations variables
	{
		[Token(Token = "0x60010F6")]
		get;
	}
}
