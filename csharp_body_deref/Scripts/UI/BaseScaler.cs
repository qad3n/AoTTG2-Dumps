using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200059D")]
internal abstract class BaseScaler : MonoBehaviour
{
	[Token(Token = "0x6003A15")]
	[Address(RVA = "0x3F80120", Offset = "0x3F80120", VA = "0x3F80120", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003A16")]
	public abstract void ApplyScale();

	[Token(Token = "0x6003A17")]
	[Address(RVA = "0x3F80140", Offset = "0x3F80140", VA = "0x3F80140")]
	protected BaseScaler()
	{
	}
}
