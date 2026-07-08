using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000CF")]
public interface IGisketchActionHandler
{
	[Token(Token = "0x60005C6")]
	void HandleAction(string actionId, GisketchActionContext context);
}
