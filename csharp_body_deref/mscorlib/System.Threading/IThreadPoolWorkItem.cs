using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000207")]
internal interface IThreadPoolWorkItem
{
	[Token(Token = "0x60012CC")]
	void ExecuteWorkItem();

	[Token(Token = "0x60012CD")]
	void MarkAborted(ThreadAbortException tae);
}
