using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.SceneManagement;

[Token(Token = "0x20001FA")]
public class SceneManagerAPI
{
	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x0")]
	private static SceneManagerAPI s_DefaultAPI;

	[Token(Token = "0x17000254")]
	internal static SceneManagerAPI ActiveAPI
	{
		[Token(Token = "0x6000DA9")]
		[Address(RVA = "0x4AECA30", Offset = "0x4AECA30", VA = "0x4AECA30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000255")]
	public static SceneManagerAPI overrideAPI
	{
		[Token(Token = "0x6000DAA")]
		[Address(RVA = "0x4AECB10", Offset = "0x4AECB10", VA = "0x4AECB10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000DAB")]
	[Address(RVA = "0x4AECB80", Offset = "0x4AECB80", VA = "0x4AECB80")]
	protected internal SceneManagerAPI()
	{
	}

	[Token(Token = "0x6000DAC")]
	[Address(RVA = "0x4AECB90", Offset = "0x4AECB90", VA = "0x4AECB90", Slot = "4")]
	protected internal virtual AsyncOperation LoadSceneAsyncByNameOrIndex(string sceneName, int sceneBuildIndex, LoadSceneParameters parameters, bool mustCompleteNextFrame)
	{
		return null;
	}

	[Token(Token = "0x6000DAD")]
	[Address(RVA = "0x4AECBE0", Offset = "0x4AECBE0", VA = "0x4AECBE0", Slot = "5")]
	protected internal virtual AsyncOperation LoadFirstScene(bool mustLoadAsync)
	{
		return null;
	}
}
