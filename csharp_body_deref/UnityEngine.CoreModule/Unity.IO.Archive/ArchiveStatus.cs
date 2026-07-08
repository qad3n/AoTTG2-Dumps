using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.IO.Archive;

[Token(Token = "0x2000036")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum ArchiveStatus
{
	[Token(Token = "0x40000B0")]
	InProgress,
	[Token(Token = "0x40000B1")]
	Complete,
	[Token(Token = "0x40000B2")]
	Failed
}
