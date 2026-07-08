using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.IO;

[Serializable]
[Token(Token = "0x2000561")]
public abstract class FileSystemInfo : MarshalByRefObject, ISerializable
{
	[Token(Token = "0x400166D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private System.IO.FileStatus _fileStatus;

	[Token(Token = "0x400166E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	protected string FullPath;

	[Token(Token = "0x400166F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	protected string OriginalPath;

	[Token(Token = "0x4001670")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	internal string _name;

	[Token(Token = "0x170005FD")]
	public FileAttributes Attributes
	{
		[Token(Token = "0x6002982")]
		[Address(RVA = "0x4F3D5F0", Offset = "0x4F3D5F0", VA = "0x4F3D5F0")]
		get
		{
			return default(FileAttributes);
		}
	}

	[Token(Token = "0x170005FE")]
	internal bool ExistsCore
	{
		[Token(Token = "0x6002983")]
		[Address(RVA = "0x4F3D6C0", Offset = "0x4F3D6C0", VA = "0x4F3D6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170005FF")]
	internal DateTimeOffset CreationTimeCore
	{
		[Token(Token = "0x6002984")]
		[Address(RVA = "0x4F3D730", Offset = "0x4F3D730", VA = "0x4F3D730")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000600")]
	internal DateTimeOffset LastWriteTimeCore
	{
		[Token(Token = "0x6002985")]
		[Address(RVA = "0x4F3D7A0", Offset = "0x4F3D7A0", VA = "0x4F3D7A0")]
		get
		{
			return default(DateTimeOffset);
		}
	}

	[Token(Token = "0x17000601")]
	internal string NormalizedPath
	{
		[Token(Token = "0x6002987")]
		[Address(RVA = "0x4F3DC40", Offset = "0x4F3DC40", VA = "0x4F3DC40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000602")]
	public virtual string FullName
	{
		[Token(Token = "0x600298A")]
		[Address(RVA = "0x4F3DFA0", Offset = "0x4F3DFA0", VA = "0x4F3DFA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000603")]
	public virtual string Name
	{
		[Token(Token = "0x600298B")]
		[Address(RVA = "0x4F3DFB0", Offset = "0x4F3DFB0", VA = "0x4F3DFB0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000604")]
	public virtual bool Exists
	{
		[Token(Token = "0x600298C")]
		[Address(RVA = "0x4F3DFC0", Offset = "0x4F3DFC0", VA = "0x4F3DFC0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000605")]
	public DateTime CreationTime
	{
		[Token(Token = "0x600298E")]
		[Address(RVA = "0x4F3E0A0", Offset = "0x4F3E0A0", VA = "0x4F3E0A0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000606")]
	public DateTime CreationTimeUtc
	{
		[Token(Token = "0x600298F")]
		[Address(RVA = "0x4F3E100", Offset = "0x4F3E100", VA = "0x4F3E100")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000607")]
	public DateTime LastWriteTime
	{
		[Token(Token = "0x6002990")]
		[Address(RVA = "0x4F3E1E0", Offset = "0x4F3E1E0", VA = "0x4F3E1E0")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000608")]
	public DateTime LastWriteTimeUtc
	{
		[Token(Token = "0x6002991")]
		[Address(RVA = "0x4F3E240", Offset = "0x4F3E240", VA = "0x4F3E240")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x600297F")]
	[Address(RVA = "0x4F3D370", Offset = "0x4F3D370", VA = "0x4F3D370")]
	protected FileSystemInfo()
	{
	}

	[Token(Token = "0x6002980")]
	[Address(RVA = "0x4F3D3D0", Offset = "0x4F3D3D0", VA = "0x4F3D3D0")]
	internal static FileSystemInfo Create(string fullPath, string fileName, ref System.IO.FileStatus fileStatus)
	{
		return null;
	}

	[Token(Token = "0x6002981")]
	[Address(RVA = "0x4F3D540", Offset = "0x4F3D540", VA = "0x4F3D540")]
	internal void Init(ref System.IO.FileStatus fileStatus)
	{
	}

	[Token(Token = "0x6002986")]
	[Address(RVA = "0x4F3D810", Offset = "0x4F3D810", VA = "0x4F3D810")]
	internal static void ThrowNotFound(string path)
	{
	}

	[Token(Token = "0x6002988")]
	[Address(RVA = "0x4F3DC50", Offset = "0x4F3DC50", VA = "0x4F3DC50")]
	protected FileSystemInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6002989")]
	[Address(RVA = "0x4F3DE70", Offset = "0x4F3DE70", VA = "0x4F3DE70", Slot = "7")]
	[ComVisible(false)]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600298D")]
	public abstract void Delete();

	[Token(Token = "0x6002992")]
	[Address(RVA = "0x4F3E320", Offset = "0x4F3E320", VA = "0x4F3E320", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
